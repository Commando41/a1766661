
mycode: main-2-2.cpp Vegie.o Animal.o
	g++ -o mycode main-2-2.cpp Animal.o Vegie.o
	@echo 'compile succeeded!'

Animal.o: Animal.h Animal.cpp
	@echo 'Compiling the component files'
	g++ -c Animal.cpp Animal.h

Vegie.o: Vegie.h Vegie.cpp
	@echo 'Compiling the component files'
	g++ -c Vegie.cpp Vegie.h

upload: 
	svn add *.cpp
	svn add *.h

update:
	svn commit -m "Update Files"

clean:
	rm -f * .o mycode
