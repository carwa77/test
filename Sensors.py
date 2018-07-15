from sense_hat import SenseHat

sense=SenseHat()

tempdata = sense.get_temperature()
temp=round(tempdata,2)
print("Temperature is: %s" % temp)

humidity=sense.get_humidity()
hum=round(humidity)
print("Humidity is: %s" % hum)

temppres=sense.get_temperature_from_pressure()
temppre=round(temppres)
print("Temperature from pressure is: %s" % temppre)

pressure=round(sense.get_pressure(),2)
print("Pressure is: %s" % pressure)

north=sense.get_compass()
print("North; %s" % north)

