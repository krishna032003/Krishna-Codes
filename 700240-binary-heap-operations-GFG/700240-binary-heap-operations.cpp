class MinHeap {
  public:
    int *harr;
    int capacity;
    int heap_size;

    // Constructor for Min Heap
    MinHeap(int c) {
        heap_size = 0;
        capacity = c;
        harr = new int[c];
    }

    ~MinHeap() { delete[] harr; }

    int parent(int i) { return (i - 1) / 2; }

    int left(int i) { return (2 * i + 1); }

    int right(int i) { return (2 * i + 2); }

    void insertKey(int k) {
        // code here
        if(heap_size==capacity) return;
        heap_size++;
        harr[heap_size-1]=k;
        for(int i=heap_size-1;i!=0 && harr[parent(i)]>harr[i];){
            swap(harr[i],harr[parent(i)]);
            i=parent(i);
        }
    }

    int extractMin() {
        if(heap_size==0) return -1;
        if(heap_size==1){ heap_size--; 
        return harr[0];}
        
        swap(harr[0],harr[heap_size-1]);
        heap_size--;
        MinHeapify(0);
        return harr[heap_size];
    }

        
    void deleteKey(int i) {
        // code here
        if(i<0 || i >= heap_size)
        return;
        decreaseKey(i,INT_MIN);
        extractMin();
    }

    // Function to change value at ith index and 
    // store that value at first index.
    void decreaseKey(int i, int new_val) {
        
        // storing new value at ith index.
        harr[i] = new_val;

        while (i != 0 && harr[parent(i)] > harr[i]) {
            
                // swapping values of ith index with its parent node
                // if value at parent node is greater.
                swap(harr[i], harr[parent(i)]);
            i = parent(i);
        }
    }

    void MinHeapify(int i) {
        int l = left(i);
        int r = right(i);
        int smallest = i;

        // if left or right child is smaller than current element,
        // we store its position.
        if (l < heap_size && harr[l] < harr[smallest])
            smallest = l;

        if (r < heap_size && harr[r] < harr[smallest])
            smallest = r;

        // if smallest is not equal to i, we swap the values at their position.
        if (smallest != i) {
            swap(harr[i], harr[smallest]);

            // calling function recursively for the smallest index.
            MinHeapify(smallest);
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna