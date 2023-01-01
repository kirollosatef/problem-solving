#
# @lc app=leetcode id=195 lang=bash
#
# [195] Tenth Line
#

# @lc code=start
# Read from the file file.txt and output the tenth line to stdout.
grep -E '^\([0-9]{3}\) [0-9]{3}-[0-9]{4}$|^[0-9]{3}-[0-9]{3}-[0-9]{4}$' file.txt
# @lc code=end

