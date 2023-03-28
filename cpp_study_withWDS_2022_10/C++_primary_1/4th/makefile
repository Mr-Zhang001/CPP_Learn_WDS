person:main.o person4.o dog.o
	g++ -o $@ $^
	
%.o:%.cpp
	g++ -c -o $@ $<

clean:
	rm -f *.o person
