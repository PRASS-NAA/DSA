select W1.Id
from Weather as W1, Weather as W2
where W1.recordDate-1 = W2.recordDate and W1.temperature> W2.temperature