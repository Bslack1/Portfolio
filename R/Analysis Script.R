#load libraries
library(syuzhet)
library(wordcloud)
library(lubridate)
library(ggplot2)
library(scales)
library(reshape2)
library(dplyr)

#up memory limit 
memory.limit(size=56000)
#run garbage collector to free up memory
gc(verbose = getOption("verbose"), reset = FALSE, full = TRUE)
#term document matrix - puts unstructured to rows and columns for word frequency
tdm <- TermDocumentMatrix(CleanSet)
tdm

#run garbage collector to free up memory
gc(verbose = getOption("verbose"), reset = FALSE, full = TRUE)
tdm <- as.matrix(tdm)
tdm[1:10, 1:20]

#word frequency
wordFreq <- rowSums(tdm)
#removes words appearing less than 50 times
wordFreq <- subset(wordFreq, wordFreq >= 50)
#make a barplot las words vertical on x axis,
barplot(wordFreq, 
        las = 2,
        col = rainbow(33))

#word cloud see video for all options, wc2 can put into other words or shapes
wordFreq <- sort(rowSums(tdm), decreasing = TRUE)
set.seed(222)
wordcloud(words = names(wordFreq),
          freq = wordFreq)

#read file again
SCableData <- read.csv(file.choose(), header = T)
Cabletweets <- iconv(SCableData$Tweet, to = "UTF-8")

#obtain emotions sentiment scores
sentscores <- get_nrc_sentiment(Watertweets)
head(sentscores)
#to look at a specific tweet
Watertweets[4]
#find specific words
get_nrc_sentiment('no')

barplot(colSums(sentscores),
        las = 2,
        col = rainbow(10),
        ylab = "count",
        main = "Sentiment Scores VarNAme")


#read file again
SElecData <- read.csv(file.choose(), header = T)
Electweets <- iconv(SElecData$Tweet, to = "UTF-8")

#afinn word sentiment
ElecSent <- get_sentiment(
                Electweets,
                method = "afinn",
                path_to_tagger = NULL,
                cl = NULL,
                language = "english",
                lexicon = NULL,
                regex = "[^A-Za-z']+",
                lowercase = TRUE)

summary(ElecSent)

SentDataElec <- data.frame(ElecSent)
write_xlsx(SentDataElec, "C:\\Users\\Administrator\\Documents\\Data Sets\\Multi Utility\\MultiSent.xlsx")
