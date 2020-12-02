sour=search
cpp=${sour}.cpp
exe=${sour}.exe

s=ten
t=eight
num=4

all:
	gcc ${cpp} -o ${exe}
test:
	@echo i am test
ex:
	@${exe}



pdfs:
	cd formula&pdflatex --shell-escape ${t}
latex:
	cd formula&latex --shell-escape ${t}	
d2s:
	d2s ${t} formula ${num}

cut:
	cut ${t} formula


one:latex
	