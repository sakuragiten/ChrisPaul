package LeetCode;
//package Basic;

import  Basic.ListNode;
public class LC_83_RemoveDuplicatesFromSortedList {

    public static void main(String[] args) {

        ListNode head = new ListNode(1);
        ListNode h = head;

//        int tmp[] = {1, 1, 3, 4, 5, 5, 5, 6};
        int tmp[] = {1, 1, 1, 1, 1, 1};

        for (int i = 0; i < tmp.length; i ++) {
            h.next = new ListNode(tmp[i]);
            h = h.next;
        }

        head = deleteDuplicates_1(head);

        System.out.println("Test");
        head.logout();
    }


    public  static  ListNode deleteDuplicates(ListNode head) {

        ListNode current = head;

        while (current != null && current.next != null) {

            ListNode next = current.next;
            while (next != null && next.val == current.val) {
                next = next.next;
            }

            current.next = next;
            current = next;
        }

        return  head;

    }

    public  static  ListNode deleteDuplicates_1(ListNode head) {

        ListNode current = head;

        while (current.next != null) {
            if (current.next.val == current.val) {
                current.next = current.next.next;
            } else {
                current = current.next;
            }
        }

        return  head;

    }



}
