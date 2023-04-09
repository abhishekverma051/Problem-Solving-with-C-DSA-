def function(fatherPos, martinPos, velFather, steps):

    result = [0]* 2

    steps1 = [0] * steps

    for i in range(0, steps):

        steps1[i] = fatherPos + velFather * i - martinPos 

    for i in range(0, steps):

        if (steps1[i] <= 0):

            continue

        v2 = steps1[i]

        count = 1

        for j in range(i, steps):

            if (steps1[j] % v2 == 0):

                count += 1

        if (result[0] <= count):

            result[0] = count

            result [1] = v2

    return result


fatherPos = int(input())

martinPos = int(input())

velFather = int(input())

steps = int(input())

result = function(fatherPos, martinPos, velFather, steps)

print(result)