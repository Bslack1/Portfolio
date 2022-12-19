# add library to session
library(RedditExtractoR)
library(writexl)
#actual script for data
XfinityReddit <- get_reddit(subreddit = "xfinity", page_threshold = 1)
write_xlsx(XfinityReddit, "C:\\Users\\Administrator\\Documents\\R\\reddit Scrape\\Data Sets Reddit\\Cable\\Xfinity2.xls")

googleFiberReddit <- get_reddit(subreddit = "googlefiber", page_threshold = 1)
write_xlsx(googleFiberReddit, "C:\\Users\\Administrator\\Documents\\R\\reddit Scrape\\Data Sets Reddit\\Cable\\Googlefiber2.xls")

SuddenLinkReddit <- get_reddit(subreddit = "suddenlink", page_threshold = 1)
write_xlsx(SuddenLinkReddit, "C:\\Users\\Administrator\\Documents\\R\\reddit Scrape\\Data Sets Reddit\\Cable\\Suddenlink2.xls")

MediaComReddit <- get_reddit(subreddit = "MediaCom", page_threshold = 1)
write_xlsx(MediaComReddit, "C:\\Users\\Administrator\\Documents\\R\\reddit Scrape\\Data Sets Reddit\\Cable\\MediaCom2.xls")

SpectrumReddit <- get_reddit(subreddit = "Spectrum", page_threshold = 1)
write_xlsx(SpectrumReddit, "C:\\Users\\Administrator\\Documents\\R\\reddit Scrape\\Data Sets Reddit\\Cable\\Spectrum2.xls")

FrontierReddit <- get_reddit(subreddit = "frontierfios", page_threshold = 1)
write_xlsx(FrontierReddit, "C:\\Users\\Administrator\\Documents\\R\\reddit Scrape\\Data Sets Reddit\\Cable\\FrotierFios2.xls")

CoxReddit <- get_reddit(subreddit = "CoxCommunications", page_threshold = 1)
write_xlsx(CoxReddit, "C:\\Users\\Administrator\\Documents\\R\\reddit Scrape\\Data Sets Reddit\\Cable\\Cox2.xls")

DishReddit <- get_reddit(subreddit = "dishnetwork", page_threshold = 1)
write_xlsx(DishReddit, "C:\\Users\\Administrator\\Documents\\R\\reddit Scrape\\Data Sets Reddit\\Cable\\Dish2.xls")

OptimumReddit <- get_reddit(subreddit = "optimum", page_threshold = 1)
write_xlsx(OptimumReddit, "C:\\Users\\Administrator\\Documents\\R\\reddit Scrape\\Data Sets Reddit\\Cable\\Optimum2.xls")