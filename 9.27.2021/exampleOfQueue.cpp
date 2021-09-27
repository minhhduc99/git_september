std::vector<int> transformArray(std::vector<int> arr, int k)
{
    std::queue<int> new_queue;
    std::vector<int> vt_result;

    for (int index = 0; index < arr.size(); ++index)
    {
        new_queue.push(arr[index]);
    }

    for (int times = 0; times < k; ++times)
    {
        new_queue.push(new_queue.front());
        new_queue.pop();
    }

    while (!new_queue.empty())
    {
        vt_result.push_back(new_queue.front());
        new_queue.pop();
    }

    return vt_result;
}