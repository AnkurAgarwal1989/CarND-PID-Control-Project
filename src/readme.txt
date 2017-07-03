Parameter Selection:
  I initially wanted to use Twiddle, but then decided to see if I could manually figure out a set of values that works.
  The values shown below are chosen manually after some trial and error and calculated guesses.

  For example:
  if the car doesnot correct itself or is too sluggish, Kp should be increased
  if the car oscillates too much, Kd needs to be increased
  if the correciton is not enough, Ki should be increased.

  For the spped PID, I only use P and D. The logic here is that if the CTE error is too high throttle should be reduced.