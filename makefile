sour=search
cpp=${sour}.cpp
exe=${sour}.exe



s=ten
t=eight
num=3

d2sp=p2s\dist-32bits\pdf2svg.exe
sp=C:\Users\26280\Desktop\after\formula\${t}.pdf
tp=C:\Users\26280\Desktop\after\formula\${t}.svg

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


mg:
	${d2sp} ${sp} ${tp}
	 


	