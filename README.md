# TPG_CROMA_E01
Sudoku Solver(E01)
DESCRIPTION:
Step into the mystique of Ancient Egypt, where golden sands guard secrets lost to time. Amidst the grandeur of pyramids and the vibrant hum of markets, a tale of discovery unfolds.
You are Amon-Ra, a renowned Egyptologist who is celebrated for unravelling history's enigmas. Your ⚫ journey takes a dramatic turn when you uncover an ancient papyrus hidden in the tomb of the Eternal Scribe-a legendary figure who encoded the universe's greatest mysteries within intricate Sudoku grids.
Each puzzle you solve reveals fragments of forgotten wisdom, leading you deeper into the Scribe's legacy-a legacy with the power to transform humanity's understanding of ancient Egypt and its unparalleled foresight.
As modern technology meets ancient brilliance, the line between past and present blurs. Will you unlock the secrets buried for millennia and reveal a truth that reshapes history? The journey awaits your genius and determination.



OBJECTIVE:
1. EXTRACT TEXT FROM IMAGES OF 9 X 9 SUDOKU GRIDS.
2. ACCURATELY SOLVE THE SUDOKU PUZZLES.
3. OUTPUT THE SOLVED SUDOKU SOLUTIONS.


BONUS:
GENERATE AND SAVE AN IMAGE OF THE SOLVED SUDOKU GRID


DATASET:
https://www.kaggle.com/datasets/tamzhiwen/1000-sudoku-images


SOLUTION:
READING THE SUDOKU PUZZLE 
Read an image from the dataset.
Preprocess the image.

SOLVING THE SUDOKU
Reshaping the array into a 9 x 9 matrix.
Solving the matrix using recursion and backtracking.

