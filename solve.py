t = int(input())
i = 1
while i <= t:
    i += 1
    n = int(input())
    a = list(map(int, input().split()))
    first = 0
    last = n - 1
    tot_cost = 0
    while (first != last):
        if a[first+1] >= a[last]:
            a[first] = max(a[first], a[last])
            last -= 1
        else:
            sol = max(a[first], a[first+1])
            first += 1
            a[first] = sol
        tot_cost += a[first]
    print(tot_cost)
