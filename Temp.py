from sense_hat import SenseHat

sense=SenseHat()
temp = sense.get_temperature()
tempdata=round(temp,2)
print("Temperature: %s C" % tempdata)
