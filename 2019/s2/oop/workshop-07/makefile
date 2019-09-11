
mycode: main-1-1.cpp Animal.o
	g++ -o mycode main-1-1.cpp Animal.o
	@echo 'compile succeeded!'

Animal.o: Animal.h Animal.cpp
	@echo 'Compiling the component files'
	g++ -c Animal.cpp Animal.h

upload: 
	svn add *.cpp
	svn add *.h

update:
	svn commit -m "Update Files"

clean:
	rm -f * .o mycode
