make: sequence.o pipeline.o
	g++ sequence.o pipeline.o

sequence.o: sequence.c
	gcc sequence.c -o sequence

pipeline.o: pipeline.c
	gcc pipeline.c -o pipeline

clean:
	rm *.o sequence pipeline
