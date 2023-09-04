0x15-file_io
Opening Files: Programs start by opening a file. When a file is opened, it is associated with a file descriptor (an integer) that represents the file within the program. This file descriptor is used to read from or write to the file.

Reading Files: After opening a file, a program can read data from it. Reading can be done sequentially, where the program reads data from the beginning of the file to the end, or it can involve random access, where the program can jump to specific locations in the file to read data.

Writing to Files: Programs can also write data to files. Data can be written sequentially, appending new information to the end of the file, or it can involve overwriting existing data or inserting data at specific locations within the file.

Closing Files: It's important to close files when you are done with them. Closing a file releases the associated resources and makes the file available for other programs to use.

File I/O is used for various purposes, such as reading configuration files, storing user data, logging, database operations, and more. Different programming languages provide different sets of functions and libraries for performing file I/O, but the fundamental concepts are similar across languages.

In summary, "File I/O" refers to the operations involved in reading data from and writing data to files, which are essential for data storage and manipulation in computer programs.
