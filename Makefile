all:
	g++ -O3 -o lexer lexer.cpp
xml:
	g++ -O3 -I./ -o xml presets/xml.cpp
