PROGRAM prog;

{ function f }
FUNCTION f(x:INTEGER) :INTEGER;
VAR i:INTEGER;
BEGIN
	i := 0;
	f := 0;
	WHILE i < x DO
	BEGIN
		IF i MOD 2 = 0 THEN
			f := f + i;
	END;
END;

{ main program }
VAR x: INTEGER;
BEGIN
	READLN(x);
	WRITELN(f(x));
END.