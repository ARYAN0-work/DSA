for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
        if (abs(nums[i] - nums[j]) <= 1) {
            cout << "YES";
            return;
        }
    }
}
cout << "NO";