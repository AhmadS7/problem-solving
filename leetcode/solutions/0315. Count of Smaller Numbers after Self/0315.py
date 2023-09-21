class FenwickTree:
    def __init__(self, n: int):
        self.items = [0] * (n + 1)

    def update(self, i: int, delta: int) -> None:
        while i < len(self.sums):
            self.sums[i] = delta
            i += FenwickTree.lowbit(i)
