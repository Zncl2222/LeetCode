func maxProfit(prices []int) int {
    sold := 0
    hold := -prices[0]
    rest := 0
    
    for i := 0; i < len(prices); i++ {
        prevSold := sold
        sold = hold + prices[i]
        hold = max(hold, rest - prices[i])
        rest = max(rest, prevSold)
    }
    return max(sold, rest)
}


func max(a int, b int) int {
    if a > b {
        return a
    } else {
        return b
    }
}