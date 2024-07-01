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

Byteland has $n$ cities, and $m$ roads between them. The goal is to construct new roads so that there is a route between any two cities.  
Your task is to find out the minimum number of roads required, and also determine which roads should be built.

### Input

The first input line has two integers $n$ and $m$: the number of cities and roads. The cities are numbered $1,2,\dots,n$.  
After that, there are $m$ lines describing the roads. Each line has two integers $a$ and $b$: there is a road between those cities.  
A road always connects two different cities, and there is at most one road between any two cities.

### Output

First print an integer $k$: the number of required roads.  
Then, print $k$ lines that describe the new roads. You can print any valid solution.

### Constraints

- $1 \le n \le 10^5$
- $1 \le m \le 2 \cdot 10^5$
- $1 \le a,b \le n$

### Example

Input:

```
4 2
1 2
3 4
```

Output:

```
1
2 3
```

Hint: union find

## D04 Message Route

Syrjälä's network has $n$ computers and $m$ connections. Your task is to find out if Uolevi can send a message to Maija, and if it is possible, what is the minimum number of computers on such a route.

### Input

The first input line has two integers $n$ and $m$: the number of computers and connections. The computers are numbered $1,2,\dots,n$. Uolevi's computer is $1$ and Maija's computer is $n$.
Then, there are $m$ lines describing the connections. Each line has two integers $a$ and $b$: there is a connection between those computers.
Every connection is between two different computers, and there is at most one connection between any two computers.

### Output

If it is possible to send a message, first print $k$: the minimum number of computers on a valid route. After this, print an example of such a route. You can print any valid solution.
If there are no routes, print "IMPOSSIBLE".

### Constraints

- $2 \le n \le 10^5$
- $1 \le m \le 2 \cdot 10^5$
- $1 \le a,b \le n$

### Example

Input:

```
5 5
1 2
1 3
1 4
2 3
5 4
```

Output:

```
3
1 4 5
```

Hint: BFS

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
