import re

regexp = r'^[0-9]*\.[0-9]+$'

strings = ['0.1', '0.', '.', '0', '0.', '.1']

for string in strings:
    if re.match(regexp, string):
        print(f"'{string}': True")
    else:
        print(f"'{string}': False")
