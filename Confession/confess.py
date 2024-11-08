def Total(r, w):
    return r + w

def reply(t):
    if t >= 120:
        return "Oh bhai, 2 ghante confessions mein laga diye?! Kya NASA mein job lagne wali hai is se? Acha hota yehi time kisi kaam ki cheez pe lagate. Zindagi mein kuch bara karna hai ya bas yahan hi phasna hai?"
    elif t >= 60:
        return "Vah, lagta hai aj sirf confession scroll karne ka irada tha. 1 se 2 ghante waste karke samajhte ho tumhari life set ho jayegi? Thora focus apne real goals pe bhi rakho, shayad kuch ban jao."
    else:
        return "Chalo, kam az kam tumne apni zindagi ke 1 ghante se kam hi barbaad kiye. Isi tarah control mein raho aur asli zindagi mein bhi kuch kar dikhane ka irada rakho!"

def main():
    week = 0
    daily = []
    
    print("Confession Time Tracker\n")
    
    for day in range(7):
        print(f"Day {day + 1}:")
        
        read = int(input("Enter time spent reading confessions (in minutes): "))
        write = int(input("Enter time spent writing confessions (in minutes): "))
        
        total = Total(read, write)
        daily.append(total)
        week += total
        
        message = reply(total)
        print(message + "\n")
    
    print("Weekly Summary:")
    if week > 600:
        print("Kya baat hai, 10 ghante se zyada confessions mein ghusa hua hai? Jawan admi ho ya waqt barbaad karne ki machine? Kuch productive cheez socho, warna ye confessions tumhari CV mein nahi likhe jayenge!")
    else:
        print("Wah bhai, lagta hai thoda waqt manage karna seekh rahe ho! Isi tarah apne goals par focus karo, warna ye confession wali duniya tumhe kabhi aagay nahi le jaayegi. Shabash, sahi raho!")
    
if __name__ == "__main__":
    main()