import collections

Location = collections.namedtuple('Location', ['row', 'column'])
Shape = collections.namedtuple('Shape', ['width', 'height'])

class GameBoard:

    def __init__ (self, shape):
        self._shape = shape
        self._field = []
        self._rows = []
        self._columns = []
        for i in range(self._shape.height):
            new_line = []
            self._rows.append(0)
            for j in range(self._shape.width):
                new_line.append('\u2b1c')
            self._field.append(new_line)
        for j in range(self._shape.width):
            self._columns.append(0)

    def get_shape(self):
        """Returns the dimensions of GameBoard,  height  ℎ  (number of rows) and width  𝑤  (number of columns)"""

        return self._shape

    def put(self, location, shape = Shape(1,1)):
        """Put blocks on the GameBoard.

        Notice that returns the object itself in a way that multiple calls can be chained.

        It has two counters that will be useful for other functions.

        Excepcions:
            If the location is already ocupied
            If the location is out of bounds
        """
        if shape.width + location.row > self._shape.width or shape.height + location.column > self._shape.height:
            raise Exception(
                'The square is out of bounds.')
        if self.is_full(location, shape):
            raise Exception(
                'The square is already occupied.')

        for i in range(shape.width):
            for j in range(shape.height):
                self._field[i + location.row][j + location.column] = '\u2b1b'
                self._rows[i + location.row] += 1
                self._columns[j + location.column] += 1
        return self

    def remove(self, location, shape = Shape(1,1)):
        """Removes blocks from the GameBoard.

        Notice that returns the object itself in a way that multiple calls can be chained.

        It has two counters that will be useful for other functions.

        Excepcions:
            If the location is empty
        """
        if self.is_empty(location, shape):
            raise Exception(
                'The location is empty')

        for i in range(shape.width):
            for j in range(shape.height):
                self._field[i + location.row][j + location.column] = '\u2b1c'
                self._rows[i + location.row] -= 1
                self._columns[j + location.column] -= 1
        return self

    def __str__(self):
        """Generates a graphic representation of the GameBoard."""
        output = []
        for row in self._field[::-1]:
            output.append(''.join(row))
        return '\n'.join(output)

    def __repr__(self):
        """Generates a string representation of the GameBoard."""
        tokens = ""
        first = True
        for i in range(self._shape.height):
            for j in range(self._shape.width):
                if self._field[i][j] == '\u2b1b':
                    if (first):
                        tokens += str((i,j))
                        first = False
                    else:
                        tokens += ", " + str((i,j))
        return  str(self._shape.width) + "x" + str(self._shape.height) + " board: {" + tokens + "}"

    def is_empty(self, location, shape = Shape(1,1)):
        """Returns True if the location is empty."""
        for i in range(shape.width):
            for j in range(shape.height):
                if (self._field[i + location.row][j + location.column] == '\u2b1b'):
                    return False
        return True

    def is_full(self, location, shape = Shape(1,1)):
        """Returns True if the location is full."""
        for i in range(shape.width):
            for j in range(shape.height):
                if (self._field[i + location.row][j + location.column] == '\u2b1c'):
                    return False
        return True

    def full_rows(self):
        """Tells us which rows are completely full."""
        fullrows = []
        for i in range(self._shape.height):
            if self._rows[i] == self._shape.width:
                fullrows.append(i)
        return fullrows

    def full_columns(self):
        """Tells us which columns are completely full."""
        fullcolumns = []
        for j in range(self._shape.width):
            if self._columns[j] == self._shape.height:
                fullcolumns.append(j)
        return fullcolumns

    def clear_rows(self, rows):
        """Deletes blocks in a set of rows"""
        voidrow = []
        for i in range(self._shape.width):
            voidrow.append('\u2b1c')
        for i in rows:
            self._field[i] = voidrow
        return self

    def clear_columns(self, columns):
        """Deletes blocks in a set of columns"""
        for j in columns:
            for i in range(self._shape.height):
                self._field[i][j] = '\u2b1c'

    def row_counters(self):
        """Returns how many squares are filled in each row."""
        return self._rows

    def column_counters(self):
        """Returns how many squares are filled in each column."""
        return self._columns
