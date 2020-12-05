sour=search
cpp=${sour}.cpp
exe=${sour}.exe

lop =$(abspath $(lastword $(MAKEFILE_LIST)))
lop2 =$(patsubst %/,%,$(dir $(lop))) 



d2se=${strip ${lop2}}/p2s/dist-64bits/pdf2svg.exe

t=formula
num=10



all:
	@echo bloby
all2:
	gcc ${cpp} -o ${exe}
test:
	@echo i am test
ex:
	@${exe}



lp:
	$(info lop=$(lop)) 
	$(info lop2=$(lop2)) 
	$(info d2se=$(d2se))

svg:
	cd formula&pdflatex --shell-escape ${t}
	d2s ${t} formula ${num} ${d2se}
	cut ${t} formula

latex:
	cd formula&latex --shell-escape ${t}	

	 
cut:
	cut ${t} formula

	