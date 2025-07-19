class BrowserHistory {
    private List<String> urls = new ArrayList<>();
    private int curr = -1, last = -1;

    public BrowserHistory(String homepage) {
        visit(homepage);
    }

    public void visit(String url) {
        ++curr;
        if (curr < urls.size()) {
            urls.set(curr, url);
        } else {
            urls.add(url);
        }
        last = curr;  // clear forward history
    }

    public String back(int steps) {
        curr = Math.max(0, curr - steps);
        return urls.get(curr);
    }

    public String forward(int steps) {
        curr = Math.min(last, curr + steps);
        return urls.get(curr);
    }
}
