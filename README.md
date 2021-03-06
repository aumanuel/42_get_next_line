# Get Next Line
Final grade: 125/100 (full bonus)

This projects is about creating a function that, allows to read a line ending with a newline character ('\n') from a file descriptor, without knowing its size beforehand.

## Challenge

* `Instructions: only 1 file`
* [42 Norm](https://cdn.intra.42.fr/pdf/pdf/960/norme.en.pdf) `maximum 5 functions per file, maximum 25 lines per function`
* `Additional personal goal: only 1 function + all the bonuses`

## Installation

* `git clone https://github.com/aumanuel/42_get_next_line.git`

## Usage
```
char *line;

// To get a single line
get_next_line(fd, &line);
...
ft_strdel(&line); // You should free after you're done using your line

// To read a whole file
while (get_next_line(fd, &line))
{
	// process the line here, here we'll just output it
	ft_putstr(line);
	
	// free the line to avoid leaking memory
	ft_strdel(&line);
}

// GNL will automatically free appropriately whenever it reaches EOF.
```

## Return value:
* `return 1 when it read a line`
* `return 0 when it finished reading a file`
* `return -1 when an error occurs`
