# Student ID:\
Student Name: Raja Sumeer
# Makefile
all: 01 02 03 04 05 06

# MD20241209-01 Added a new runAll rule to run all .exe files that have been built
runAll: run01 run02 run03 run04 run05 run06

# Removes .exe files from the bin folder ("make clean")
clean:
	rm ../../bin/*.exe

01: Copyfile/copyfile.c
	gcc -o ../../bin/copyfile.exe Copyfile/copyfile.c
# MD20241209-02 Added a new Run01 rule that runs the executable for 01, which is ../../bin/copyfile.exe
run01:
	@echo --------------------
	@echo Running ../../bin/copyfile.exe
	../../bin/copyfile.exe
	@echo
	@echo

02: Matrice\ Inverse/xxmatriceinverse.c
	gcc -o ../../bin/xxmatriceinverse.exe Matrice\ Inverse/xxmatriceinverse.c
# MD20241209-02 Added a new Run02 rule that runs the executable for 02, which is ../../bin/xxmatriceinverse.exe
run02:
	@echo --------------------
	@echo Running ../../bin/xxmatriceinverse.exe
	../../bin/xxmatriceinverse.exe
	@echo
	@echo

03: Matrice\ Manipulation/xxrobust.c
	gcc -o ../../bin/xxrobust.exe Matrice\ Manipulation/xxrobust.c
# MD20241209-02 Added a new Run03 rule that runs the executable for 03, which is ../../bin/xxrobust.exe
run03:
	@echo --------------------
	@echo Running ../../bin/xxrobust.exe
	../../bin/xxrobust.exe
	@echo
	@echo

04: Matrice\ MultiplicationTransposing/xxmatricemultiplication.c
	gcc -o ../../bin/xxmatricemultiplication.exe Matrice\ MultiplicationTransposing/xxmatricemultiplication.c
# MD20241209-02 Added a new Run04 rule that runs the executable for 04, which is ../../bin/xxmatricemultiplication.exe
run04:
	@echo --------------------
	@echo Running ../../bin/xxmatricemultiplication.exe
	../../bin/xxmatricemultiplication.exe
	@echo
	@echo

05: Matrices/multiplymatrice.c
	gcc -o ../../bin/multiplymatrice.exe Matrices/multiplymatrice.c
# MD20241209-02 Added a new Run05 rule that runs the executable for 05, which is ../../bin/multiplymatrice.exe
run05:
	@echo --------------------
	@echo Running ../../bin/multiplymatrice.exe
	../../bin/multiplymatrice.exe
	@echo
	@echo

06: Matrices/textmatrice.c
	gcc -o ../../bin/textmatrice.exe Matrices/textmatrice.c
# MD20241209-02 Added a new Run06 rule that runs the executable for 06, which is ../../bin/textmatrice.exe
run06:
	@echo --------------------
	@echo Running ../../bin/textmatrice.exe
	../../bin/textmatrice.exe
	@echo
	@echo
