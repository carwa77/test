from twython import Twython

APP_KEY='w4
APP_SECRET='
OAUTH_TOKEN='94840857-Rd0D76KqXaW27rsbH'
OAUTH_TOKEN_SECRET='iiA89B3Jw4X'

twitter = Twython(APP_KEY, APP_SECRET, OAUTH_TOKEN,OAUTH_TOKEN_SECRET)
twitter.update_status(status='Second tweet from python')
