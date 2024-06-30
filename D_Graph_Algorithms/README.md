# D Graph

## D01 Counting Rooms

You are given a map of a building, and your task is to count the number of its rooms. The size of the map is $n \times m$ squares, and each square is either floor or wall. You can walk left, right, up, and down through the floor squares.

### Input

The first input line has two integers $n$ and $m$: the height and width of the map.  
Then there are $n$ lines of $m$ characters describing the map. Each character is either `.` (floor) or `#` (wall).

### Output

Print one integer: the number of rooms.

### Constraints

- $1 \le n,m \le 1000$

### Example

Input:

```
5 8
########
#..#...#
####.#.#
#..#...#
########
```

Output:

```
3
```

Hint: BFS/DFS

## D02 Labyrinth

You are given a map of a labyrinth, and your task is to find a path from start to end. You can walk left, right, up and down.

### Input

The first input line has two integers $n$ and $m$: the height and width of the map.  
Then there are $n$ lines of $m$ characters describing the labyrinth. Each character is `.` (floor), `#` (wall), `A` (start), or `B` (end). There is exactly one `A` and one `B` in the input.

### Output

First print `YES`, if there is a path, and `NO` otherwise.  
If there is a path, print the length of the shortest such path and its description as a string consisting of characters `L` (left), `R` (right), `U` (up), and `D` (down). You can print any valid solution.

### Constraints

- $1 \le n,m \le 1000$

### Example

Input:

```
5 8
########
#.A#...#
#.##.#B#
#......#
########
```

Output:

```
YES
9
LDDRRRRRU
```

Hint: BFS/Store path

## D03 Building Roads

## D04 Message Route

## D05 Building Teams

## D06 Round Trip

## D07 Monsters

## D08 Shortest Routes I

## D09 Shortest Routes II

## D10 High Score

## D11 Flight Discount

## D12 Cycle Finding

## D13 Flight Routes

## D14 Round Trip II

## D15 Course Schedule

## D16 Longest Flight Route

## D17 Game Routes

## D18 Investigation

## D19 Planets Queries I

## D20 Planets Queries II

## D21 Planets Cycles

## D22 Road Reparation

## D23 Road Construction

## D24 Flight Routes Check

## D25 Planets and Kingdoms

## D26 Giant Pizza

## D27 Coin Collector

## D28 Mail Delivery

## D29 De Bruijn Sequence

## D30 Teleporters Path

## D31 Hamiltonian Flights

## D32 Knight's Tour

## D33 Download Speed

## D34 Police Chase

## D35 School Dance

## D36 Distinct Routes
