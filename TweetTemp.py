from sense_hat import SenseHat
from twython import Twython

sense=SenseHat()
tempdata = sense.get_temperature()
tempdata=round(tempdata,2)
temp=str(tempdata)


APP_KEY='w4cYjho9iBS0y1KOv29IzxfuW'
APP_SECRET='5moyf8hNPGI4TlJoYZ8TZHNK0S2oTaLr5OBY2nt44gmUoVxJ84'
OAUTH_TOKEN='94840857-Rd0D76KqXaBmwEq1Zt21E1BafKYcH7zHNxW27rsbH'
OAUTH_TOKEN_SECRET='iiA89B3Jw4XBP6QUJTODyAptt1GCYMLgdJPjX9hnePFd1'

twitter = Twython(APP_KEY, APP_SECRET, OAUTH_TOKEN,OAUTH_TOKEN_SECRET)
twitter.update_status(status='Temperature: '+temp+' C')