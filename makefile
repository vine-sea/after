sour=search
cpp=${sour}.cpp
exe=${sour}.exe

all:
	gcc ${cpp} -o ${exe}
test:
	@echo i am test
ex:
	@${exe}