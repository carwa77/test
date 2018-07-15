from sense_hat import SenseHat
from twython import Twython

sense=SenseHat()
tempdata = sense.get_temperature()
tempdata=round(tempdata,2)
temp=str(tempdata)


APP_KEY='
APP_SECRET='
OAUTH_TOKEN=
OAUTH_TOKEN_SECRET=

twitter = Twython(APP_KEY, APP_SECRET, OAUTH_TOKEN,OAUTH_TOKEN_SECRET)
twitter.update_status(status='Temperature: '+temp+' C')
