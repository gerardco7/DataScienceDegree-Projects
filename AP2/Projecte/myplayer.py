from gameboard import *

class MyPlayer:
    def __init__(self, shape):
        self._shape = shape

    def place_block(self, location, shape):
        self.put(location,shape)
        shape.clear_columns(shape.full_columns)
        shape.clear_rows(shape.full_rows)
    return self

    def play(self, shape)
        for i in range(self._shape.height - shape.height + 1):
            for j in range(self._shape.width - shape.width + 1):
                if is_empty(Location(i,j), shape):
                    return Location(i,j)
        return None
