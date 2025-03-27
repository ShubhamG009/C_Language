import random

snake = {10: 4, 16: 11, 24: 10, 34: 5, 49: 1, 50: 100}
ladder = {7: 45, 13: 32, 21: 29, 35: 42, 41: 48, 50: 100}

player1 = 1
player2 = 1

while True:
    input("For P1 'Enter' to throw dice:")
    if player1 < 50:
        a = random.randint(1, 6)
        print("Dice = ", a)
        position = player1 + a
        if position > 50:
            print("Player 1 cannot move . Pass the dice:")
        else:
            player1 = position
            for i in snake:
                if player1 == i:
                    player1 = snake[i]
                    if player1 < 50 :
                        print("Ohh no ! Player hit a snake! Moving to position:", player1)
            for i in ladder:
                if player1 == i:
                    player1 = ladder[i]
                    if player1 < 50:
                        print("Ohh YES ! Player found a ladder! Moving to position:", player1)
        print("Position of P1:", player1)
    
    if player1 == 100:
        print("Player 1 is the winner !")
        break
    
    print("\n")
    input("For P2 'Enter' to throw dice:")
    if player2 < 50:
        d = random.randint(1, 6)
        print("Dice = ", d)
        position = player2 + d
        if position > 50:
            print("Player 2 cannot move. Pass the Dice:")
        else:
            player2 = position
            for i in snake:
                if player2 == i:
                        player2 = snake[i]
                        if player2 < 50:
                            print("Ohh No! Player hit a snake! Moving to position:", player2)
            for i in ladder:
                if player2 == i:
                    player2 = ladder[i]
                    if player2 < 50 :
                        print("Ohh YES! Player found a ladder! Moving to position:", player2)
        print("Position of P2:", player2)
        print("\n")

    if player2 == 100:
        print("Player 2 is the winner!")
        break
