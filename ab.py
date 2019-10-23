import requests
from bs4 import BeautifulSoup


page = requests.get('https://www.thehindu.com/news/national/')

soup = BeautifulSoup(page.content, 'html.parser')
#print(soup)
a=soup.find_all(class_='Other-StoryCard')
file1 = open("myfile.txt","w")
for i in range(0, len(a)):
    b = a[i].get_text()
    print(a[i].find(class_='Other-StoryCard-heading').get_text())
    file1.write(b)

file1.close()
