from tkinter import *
import random

def mousePressed(event):
    canvas = event.widget.canvas
    redrawAll(canvas)

def keyPressed(event):
    canvas = event.widget.canvas
    
    if event.char == 'q':
        gameOver(canvas)
    elif event.char == 'r':
        init(canvas) 
    
    if canvas.data['isGameOver'] == False:      
        if event.keysym == 'Up':
            pass
            moveFallingPiece(canvas,-1,0)
##            canvas.data['Dcol']=-1
##            canvas.data['Drow']=0
        elif event.keysym == 'Down':
            moveFallingPiece(canvas,1,0)
##            canvas.data['Dcol']=1
##            canvas.data['Drow']=0
        elif event.keysym == 'Left':
            moveFallingPiece(canvas,0,-1)
##            canvas.data['Dcol']=0
##            canvas.data['Drow']=-1
        elif event.keysym == 'Right':
            moveFallingPiece(canvas,0,1)
##            canvas.data['Dcol']=0
##            canvas.data['Drow']=1
    

##def setFallingPiece(canvas,Row,Col):
##    board = canvas.data['tetrisBoard']
##    if Row + len(fallingpiece) == len(board):
##        board[Row + len(fallinpiece)] = 1
    
def gameOver(canvas):
    canvas.data['isGameOver'] = True
    
def rotateFallingPiece(canvas):
    board = canvas.data['tetrisBoard']
    piece = canvas.data['tetrisPiece']
    newrow = []
    newcol = []
    for j in range(len(piece[0])):
        for i in range(len(piece)):
            newrow.append(piece[i][len(piece[0])-j-1])
        newcol.append(newrow)
        newrow = []
    canvas.data['tetrisPiece'] = newcol
    Row = canvas.data['fallingPieceRow'] 
    Col = canvas.data['fallingPieceCol']
    for p in range(len(newcol)):
        for q in range(len(newcol[p])):
            if Row + p  >= len(board) or Col + q + 1 > len(board[0]):
                canvas.data['Check'] = True
                p = True
                break
        if p == True:
            break

def timerFired(canvas):
    if canvas.data['isGameOver'] == False:
        moveFallingPiece(canvas,1,0)
    a = canvas.data['Score']
    if a < 180:
        delay = 600 - 3*a
    else:
        delay = 60
    canvas.after(delay, timerFired, canvas)

def clearRow(canvas):
    mul = 0
    board = canvas.data['tetrisBoard']
    for i in range(len(board)):
        intlist = [1]
        for j in range(len(board[i])):
            if type(board[i][j]) == str:
                intlist.append(int(1))
            else:
                intlist.append(0)
        if 0 not in intlist:
            board.remove(board[i])
            board.insert(0, [ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ])
            canvas.data['tetrisBoard'] = board
            mul += 1
    if mul != 0:
        canvas.data['Score'] += 2**mul
                  

def setFallingPiece(canvas):
    board = canvas.data['tetrisBoard']
    Row = canvas.data['fallingPieceRow']
    Col = canvas.data['fallingPieceCol']
    piece = canvas.data['tetrisPiece']
    for i in range(len(piece)):
        for k in range(len(piece[i])):
            if piece[i][k] != 0:
                board[Row+i][Col+k] = canvas.data['tetrisColor']                
    canvas.data['tetrisBoard'] = board
    clearRow(canvas)
    newFallingPiece(canvas)
    redrawAll(canvas)

def moveFallingPiece(canvas,drow,dcol):
    fallingpiece = canvas.data['tetrisPiece']
    Row = canvas.data['fallingPieceRow'] 
    Col = canvas.data['fallingPieceCol']    
    board = canvas.data['tetrisBoard']
    stack(canvas,Row,Col,drow,dcol,board,fallingpiece)
    check = canvas.data['Check']
    if check == True:
        pass
    elif drow == -1:
        rotateFallingPiece(canvas)
        pass
    else:
        canvas.data['fallingPieceCol'] = Col + dcol
        canvas.data['fallingPieceRow'] = Row + drow
    redrawAll(canvas)

def stack(canvas,Row,Col,drow,dcol,board,fallingpiece):
    p = False
    canvas.data['Check'] = False
    piece = canvas.data['tetrisPiece']
    for i in range(len(piece)):
        for j in range(len(piece[i])):
            if piece[i][j] != 0:
                if drow == -1:
                    rotateFallingPiece(canvas)
                elif dcol == +1:
                    if board[Row+i+drow][Col+j+dcol] != 0 or Col + len(fallingpiece[0]) == len(board[0]):
                        canvas.data['Check'] = True
                        p = True
                        break
                elif dcol == -1:
                    if Col == 0 or board[Row+i+drow][Col+j+dcol] != 0:
                        canvas.data['Check'] = True
                        p = True
                        break
                elif Row + len(fallingpiece) == len(board):
                    setFallingPiece(canvas)
                    canvas.data['Check'] = True
                    p = True
                    break
                elif piece[i][j] == 1 and board[Row+i+drow][Col+j] != 0:
                    setFallingPiece(canvas)
                    canvas.data['Check'] = True
                    p = True
                    break 
        if p == True:
            break
                
    
def drawFallingPiece(canvas):
    fallingPiece = canvas.data['tetrisPiece']
    fallingColor = canvas.data['tetrisColor']
    board = canvas.data['tetrisBoard'] 
    fallingPieceRow = canvas.data['fallingPieceRow'] 
    fallingPieceCol = canvas.data['fallingPieceCol']
    if board[0][5]!=0: #Game Over Condition Here
        gameOver(canvas)
    for row in range(len(fallingPiece)):
        for col in range(len(fallingPiece[row])):
            if canvas.data['isGameOver'] == False:
                drawFallingCell(canvas,fallingPiece,board, row,col,fallingPieceRow,fallingPieceCol,fallingColor)

    
def drawFallingCell(canvas,tetrisPiece,tetrisboard,row,col,rowboard,colboard,color):
    margin = 5
    cellsize = 25
    if tetrisPiece[row][col] == 1:
        canvas.create_rectangle(margin+cellsize*(col+colboard) ,margin+cellsize*(row+rowboard),margin+cellsize*(col+colboard)+cellsize,margin+cellsize*(row+rowboard)+cellsize, fill = color)

def newFallingPiece(canvas):
    piece = canvas.data['tetrisPieces'][random.randint(0,len(canvas.data['tetrisPieces'])-1)]
    color = canvas.data['tetrisColors'][random.randint(0,len(canvas.data['tetrisColors'])-1)]
    canvas.data['tetrisPiece'] = piece
    canvas.data['tetrisColor'] = color
    fallingPiece = canvas.data['tetrisPiece']
    board = canvas.data['tetrisBoard']
    canvas.data['fallingPieceRow'] = 0 
    canvas.data['fallingPieceCol'] = int(len(board[0])/2)-1
    
def redrawAll(canvas):
    canvas.delete(ALL)
    drawTetrisBoard(canvas) # redraw new canvas in its place
    if canvas.data['isGameOver'] == True:
        canvas.create_text(135,135,text='Game Over!',font = ('Helvetica',32,'bold'))
    else:
        drawFallingPiece(canvas)
        print(canvas.data['Score'])
    canvas.create_text(135,505,text='Score: '+str(canvas.data['Score']),font= \
                       	('Helvetica',32,'bold'))

def drawTetrisBoard(canvas):
    board = canvas.data['tetrisBoard'] 
    for col in range(len(board)):
        for row in range(len(board[col])):
            drawTetrisCell(canvas, board, row, col)

def drawTetrisCell(canvas, tetrisBoard, row, col):
    margin = 5
    cellSize = 25
    canvas.create_rectangle(margin+cellSize*row, margin+cellSize*col, margin+cellSize*row+25, margin+cellSize*col+25, fill="blue")
    
    if tetrisBoard[col][row] == 0:
        canvas.create_rectangle(margin+cellSize*row, margin+cellSize*col, margin+cellSize*row+25, margin+cellSize*col+25, fill="blue")
    else:
        canvas.create_rectangle(margin+cellSize*row, margin+cellSize*col, margin+cellSize*row+25, margin+cellSize*col+25, fill=tetrisBoard[col][row])


def loadTetrisBoard(canvas):
    
    board = [ 
              [ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ],
              [ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ],
              [ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ],
              [ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ],
              [ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ],
              [ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ],
              [ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ],
              [ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ],
              [ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ],
              [ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ],
              [ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ],
              [ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ],
              [ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ],
              [ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ],
              [ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ],
              [ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ],
              [ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ],
              [ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ]]

    longpiece = [[1,1,1,1]]
    tpiece = [[1,1,1],[0,1,0]]
    lpiece1 =[[1,1,1],[1,0,0]]
    lpiece2= [[1,1,1],[0,0,1]]
    squarepiece = [[1,1],[1,1]]
    squigpiece1 =[[1,1,0],[0,1,1]]
    squigpiece2 = [[0,1,1],[1,1,0]]
    tetrispieces = [longpiece,tpiece,lpiece1,lpiece2,squarepiece,squigpiece1,squigpiece2]
    tetriscolors = ["yellow","green","red","pink","purple","orange","cyan"]
    canvas.data['tetrisBoard'] = board
    canvas.data["tetrisPieces"] = tetrispieces
    canvas.data["tetrisColors"] = tetriscolors
    canvas.data['isGameOver'] = False
    canvas.data['Score'] = 0
    
    
    return

def printInstructions():
    print('''Tetris!
Use the arrow keys to move the block.
Stack blocks. Eliminate rows.''')
    return

def init(canvas):
    printInstructions()
    loadTetrisBoard(canvas)
    newFallingPiece(canvas)
    redrawAll(canvas)

def run():
    root = Tk()
    canvas = Canvas(root, width=270, height = 550)
    canvas.pack()
    root.canvas = canvas.canvas = canvas
    canvas.data = { }
    init(canvas)
    root.bind("<Button-1>", mousePressed)
    root.bind("<Key>", keyPressed)
    timerFired(canvas)
    root.mainloop()

run()
    
