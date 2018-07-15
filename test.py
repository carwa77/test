#!/usr/bin/env python

import sqlite3

conn=sqlite3.connect('MyFirstDatabase.db')

curs=conn.cursor()

print"\n Entire databasecontents:\n"
for row in curs.execute("SELECT * FROM fruit ORDER BY price DESC"):
        print row
        
conn.close()
        
