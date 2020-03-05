import re

s = input("DO you agree:\n")

if re.search("^y(es)?$", s, re.IGNORECASE):#^Start string $end string
    print("Agreed")
elif re.search("n(o)?", s, re.IGNORECASE):
    print("Not agreed")