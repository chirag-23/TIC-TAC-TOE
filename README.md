# TIC-TAC-TOE
This is my First Semester Project "Tic-Tac-Toe". It is written in C language and can be run on output console.
Problem: Given a 3x3 grid, the agents has to find the optimal cell to fill with respective marks.
Goals: To find the optimal cell to fill with respective marks and in order to win the game, the cell must be filled such that one of the following criteria is satisfied:
1. A row is completely filled by a mark ‘X’ or ‘O’.
2. A diagonal is completely filled by a mark ‘X’ or ‘O’. 
3. 3. A column is completely filled by a mark ‘X’ or ‘O’.
If these criteria are not satisfied by both the agents, the game is terminated with a tie situation.

Constraints:
1. Once the cell is occupied by a mark, it cannot be reused.
2. Agents place the mark alternatively. So, consecutive moves from any agent is not allowed.

Program Highlights - 
The Tic-Tac-Toe i’ve program first gives you option to chose between ‘if you want to play against computer’ or ‘if you want to play against human’.
❖single_player() : this section of code will execute only when we choose if we want to play against the computer. This function records the response of player1 as we give command through keyboard and the response of player2 i.e. computer , is decided randomly using rand() function.

❖double_player() : this section of code will execute only when we choose if we want to play against another human. This function records the responses of both players alternatively.
