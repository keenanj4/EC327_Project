# Andrew Kvartek
# snake3.py
# This is a set of functions that you will have to buid for the
# Snake game to work.  We will do some in class, some as take home
# Some of the functions that deal with the events are complete.
  
from tkinter import *
import random


def mousePressed(event):
    canvas = event.widget.canvas
    redrawAll(canvas)
    

def keyPressed(event):
    canvas = event.widget.canvas
    # You will have to add stuff here to respond to events:
    # the 'q' key: quit the game
    # the 'r' key: restart the game
    # the up, down, left, right arrow keys to move
    
    if event.char == 'q':
        gameOver(canvas)
    elif event.char == 'r':
        init(canvas) 

    if canvas.data['isGameOver'] == False:      
        if event.keysym == 'Up':
            canvas.data['Drow']=-1
            canvas.data['Dcol']=0
        elif event.keysym == 'Down':
            canvas.data['Drow']=1
            canvas.data['Dcol']=0
        elif event.keysym == 'Left':
            canvas.data['Drow']=0
            canvas.data['Dcol']=-1
        elif event.keysym == 'Right':
            canvas.data['Drow']=0
            canvas.data['Dcol']=1
    redrawAll(canvas)

def placeFood(canvas):
    board = canvas.data["snakeBoard"]
    x = random.randint(0,9)
    y = random.randint(0,9)
    if board[x][y]==0:
        board[x][y]-=1
    else:
        placeFood(canvas)
    pass
    

def timerFired(canvas):
    # you will modify this function.  Right now it simply redraws everything.
    if canvas.data['isGameOver'] == False:
        redrawAll(canvas)
        drow = canvas.data['Drow']
        dcol = canvas.data['Dcol']
        moveSnake(canvas,drow,dcol)
        
    else:
        print('Game is over')
        
    delay = 350 # milliseconds
    canvas.after(delay, timerFired, canvas) # pause, then call timerFired again
    # Specifically, the syntax is after(delay in msec, the fucntion to call, the arguments to that function)
    # so this will call timerFired(canvas) again after delay milliseconds.
    

def redrawAll(canvas):
    canvas.delete(ALL)  # erase old canvas
    drawSnakeBoard(canvas) # redraw new canvas in its place
    if canvas.data['isGameOver'] == True:
        canvas.create_text(155,155,text='Game Over!',font = ('Helvetica',32,'bold'))
        canvas.create_text(155,205,text='Score: '+str(canvas.data['snakeLen']),font= \
                           ('Helvetica',32,'bold'))



    
def gameOver(canvas):
    canvas.data['isGameOver'] = True
    
def removeTail(canvas):
    board = canvas.data["snakeBoard"]
    for i in range(len(board)):
        for j in range(len(board[i])):
            if board[i][j]>0:
                board[i][j] -= 1

def moveSnake(canvas,drow,dcol):
    """Moves the snake head one step in this direction.
    then removing the tail... """
    # You will write this...
    board = canvas.data['snakeBoard']

    hRow = canvas.data['headRow']
    hCol = canvas.data['headCol']
    hVal = board[hRow][hCol]

    if hRow+drow< 0 or hRow + drow> 9:
        gameOver(canvas)
        return
    if hCol + dcol < 0 or hCol + dcol > 9:
        gameOver(canvas)
        return
    if board[hRow + drow][hCol+dcol] > 1:
        gameOver(canvas)
        return
    if board[hRow + drow][hCol+dcol] <0:
        placeFood(canvas)
        board[hRow+drow][hCol+dcol] = hVal+1
        canvas.data['snakeLen']=board[hRow+drow][hCol+dcol]
        canvas.data['headRow']=hRow+drow
        canvas.data['headCol']=hCol+dcol
        return
    else:
        board[hRow+drow][hCol+dcol] = hVal+1
        canvas.data['snakeLen']=board[hRow+drow][hCol+dcol]
        canvas.data['headRow']=hRow+drow
        canvas.data['headCol']=hCol+dcol
        removeTail(canvas)

 

def redrawAll(canvas):
    canvas.delete(ALL)  # erase old canvas
    drawSnakeBoard(canvas) # redraw new canvas in its place
    if canvas.data['isGameOver'] == True:
        canvas.create_text(155,155,text='Game Over!',font = ('Helvetica',32,'bold'))
        canvas.create_text(155,205,text='Score: '+str(canvas.data['snakeLen']),font= \
                           ('Helvetica',32,'bold'))


def drawSnakeBoard(canvas):
    # you write this!
    # hint: for every row,col position on the board, call
    # drawSnakeCell, a helper method you will also write, with syntax
    #    drawSnakeCell(canvas, snakeBoard, row, col)
    
    board = canvas.data['snakeBoard'] # creates a simple reference to use locally
    for i in range(0,10):
        for j in range(0,10):
            drawSnakeCell(canvas, board, i, j)

    pass
    


def drawSnakeCell(canvas, snakeBoard, row, col):
    # you write this!
    # You will draw a 30 x 30 cell, starting at margin from the edge.
    # Hence, the cell for row, col starts at margin + 30*row, margin + 30*col
    # as Northeast corner, and the SW corner is (30,30) added to that. 
    # To make a cell, draw a white squre in the right place.  If the snake is in
    # the cell, add a blue circle to the cell.  If the snake head is in the cell,
    # add a purple circle instead of a blue circle.  
    margin = 5
    cellSize = 30
    
    canvas.create_rectangle(margin + 30*col, margin + 30*row, margin + 30*col+30, margin + 30*row+30, fill='white')

    # draw the white rectange
    

    if row == canvas.data['headRow'] and col == canvas.data['headCol']:
        canvas.create_oval(margin + 30*col, margin + 30*row, margin + 30*col+30, margin + 30*row+30, fill='purple')
        # draw the purple circle, same dimensions as the white square.
    elif snakeBoard[row][col] > 0:
        canvas.create_oval(margin + 30*col, margin + 30*row, margin + 30*col+30, margin + 30*row+30, fill='blue')
        # draw the blue circle, for the snake body
    elif snakeBoard[row][col] < 0:
        canvas.create_oval(margin + 30*col, margin + 30*row, margin + 30*col+30, margin + 30*row+30, fill='green')



    

def findSnakeHead(canvas):
    # You will have to find where the snake head is (what row, what column)
    # you will store the row in canvas.data('headRow'), and the column
    # in canvas.data('headCol')
    # Basically, find the row and column with the largest number in
    # the board 

    board = canvas.data['snakeBoard']
    # replace this by your search
    head = -1
    for x in range(len(board)):
        for i in range(len(board[x])):
            if board[x][i] >head:
                head = board[x][i]
                row = x
                col = i
    max2 = head


    # Now row,col should be the row with the largest number on the board

    canvas.data['headRow'] = row
    canvas.data['headCol'] = col
    canvas.data['snakeLen'] = max2


    

def loadSnakeBoard(canvas):
    # you write most of this 
    # allocate the new snakeBoard 2d list as described
    # in the notes, and store it in the canvas's data
    # dictionary with the key snakeBoard

    board = [ [ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ],
              [ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ],
              [ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ],
              [ 0, 0, 0, 0, 4, 5, 6, 0, 0, 0 ],
              [ 0, 0, 0, 0, 3, 0, 7, 0, 0, 0 ],
              [ 0, 0, 0, 1, 2, 0, 8, 0, 0, 0 ],
              [ 0, 0, 0, 0, 0, 0, 9, 0, 0, 0 ],
              [ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ],
              [ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ],
              [ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ]
            ]

    # create the initial board... You write this.

    for i in board:
        print(i)

    # the canvas.data is a dictionary that will store the data
    # in the canvas  We will store the board as below:
    canvas.data["snakeBoard"] = board
    canvas.data['snakeLen'] = 9
    findSnakeHead(canvas)
    canvas.data['isGameOver'] = False
    placeFood(canvas)
    canvas.data['Dcol']=-1
    canvas.data['Drow']=0
    
    return

def printInstructions():
    # you write this!
    # print the instructions
    print('Snake!')
    print('Use the arrow keys to move the snake.')
    print('Eat food to grow long and storong.')
    print('Stay on the board!')
    print("And don't eat yourself!")

    return

def init(canvas):
    printInstructions() # You write this
    loadSnakeBoard(canvas) # You write this
    redrawAll(canvas)

########### copy-paste below here ###########

def run():
    # create the root and the canvas
    root = Tk()
    canvas = Canvas(root, width=310, height=310)
    canvas.pack()
    # Store canvas in root and in canvas itself for callbacks
    root.canvas = canvas.canvas = canvas
    # Set up canvas data and call init: this loads the dictionary
    canvas.data = { }
    init(canvas)
    # set up events
    root.bind("<Button-1>", mousePressed)
    root.bind("<Key>", keyPressed)
    timerFired(canvas)
    # and launch the app
    root.mainloop()  # This call BLOCKS (so your program waits until you close the window!)

run()