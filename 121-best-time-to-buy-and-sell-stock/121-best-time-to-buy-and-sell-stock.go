func MAX(a, b int) int {
    if a > b {
        return a
    }else {
        return b
    }
}

func maxProfit(prices []int) int {
    
    var left int = 0
    var right int = 0
    var best int = 0
    
    for ; right < len(prices); {
        
        if prices[left] >= prices[right] {
            left = right
        } else {
            best = MAX(best, prices[right]-prices[left])
        }
        right++
    }
    return best
}