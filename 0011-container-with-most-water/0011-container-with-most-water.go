func max(a, b int) int {
    if a > b {
        return a
    } else {
        return b
    }
}

func min(a, b int) int {
    if a < b {
        return a
    } else {
        return b
    }
}

func maxArea(height []int) int {
    head := 0
    tail := len(height) - 1
    area := 0
    for ; head < tail; {
        h := min(height[head], height[tail])
        area = max(h * (tail - head), area)
        
        if height[head] > height[tail] {
            tail -= 1
        } else {
            head += 1
        }
    }
    return area
}