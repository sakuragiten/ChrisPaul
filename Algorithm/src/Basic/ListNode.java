package Basic;

public class ListNode {


    public int val;

    public ListNode next;

    public ListNode(int x ) {
        val = x;
    }


    public void logout() {
        ListNode h = this;
        while (h != null) {
            System.out.println(" " + h.val);
            h = h.next;
        }
    }
}
