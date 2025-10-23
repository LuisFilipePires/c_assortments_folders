# life-game
## 🧩 How to Compile
cc *.c -o life

### ▶️ How to Run
./life &lt;width&gt; &lt;height&gt; &lt;iterations&gt;

### Example:
              ./life 10 6 0
          or  
              echo 'sdxssdswdxdddxsaddawxwdxwaa' | ./a.out 10 6 0 | cat -e

### 🕹️ Enter Commands
While the program is running, type your commands (using w, a, s, d to move and x to toggle the pen).
Example input: sdxssdswdxdddxsaddawxwdxwaa


### 🧱 Example Result:

 ```text
          $
 0   000  $
 0     0  $
 000  0   $
  0  000  $
          $
```
          



# 🧬 How the Game of Life Works

The Game of Life, devised by mathematician John Conway, is a cellular automaton that simulates how simple rules can create complex behavior.

The universe of the Game of Life is an infinite, two-dimensional grid of square cells.
Each cell can be in one of two possible states:

Alive (populated)

Dead (unpopulated)

Every cell interacts with its eight neighbors — those that are horizontally, vertically, or diagonally adjacent.
At each step in time (called a generation), the following transitions occur:

Any live cell with fewer than two live neighbors dies (underpopulation).

Any live cell with two or three live neighbors survives to the next generation.

Any live cell with more than three live neighbors dies (overpopulation).

Any dead cell with exactly three live neighbors becomes alive (reproduction).

These rules can be summarized as:

Live cell + 2 or 3 neighbors → stays alive

Dead cell + 3 neighbors → comes to life

All other cells → remain or become dead

The initial pattern of live cells is the seed of the system.

<br>
<br>
<br>

# 🛠️ Implementation Note

In this version of the Game of Life, I chose to use a structure for each cell with two fields:

now → the current state of the cell (alive or dead)

next → the state of the cell in the next generation

This approach allows the program to compute the next generation without creating a completely new board.

By storing both the current and next state in the same structure:

The code stays cleaner and easier to read

We avoid extra memory allocation for a separate board

Updates can be applied to all cells simultaneously, then copied to now for the next iteration

This is an alternative to the more common approach of creating a second board for the next generation.
Each generation is created by applying the rules simultaneously to all cells — births and deaths happen together at each tick of time.

Over many generations, the system can produce fascinating behaviors:
stable patterns, oscillators, and even moving structures known as gliders.


<br>
<br>
 <p align="left">
  <a href="https://github.com/LuisFilipePires/c-assortiment">
    <img src="https://github.com/LuisFilipePires/badges/blob/main/greenleft.png" alt="Back to ecole-42" width="80"/> 
  <div style="display: flex; height: 200px; align-items: center; justify-content: center;"><p>Back to C assortment</p> </div>
  </a>
</p>
