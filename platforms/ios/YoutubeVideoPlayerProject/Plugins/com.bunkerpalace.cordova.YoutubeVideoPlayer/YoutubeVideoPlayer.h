//
//  YoutubeVideoPlayer.m
//
//  Fixed and Edited by Abdallah Madi on 13-October-2019.
//
//

#import <Cordova/CDV.h>

@interface YoutubeVideoPlayer : CDVPlugin {
    NSString* _eventsCallbackId;
}

- (void)openVideo:(CDVInvokedUrlCommand*)command;

@end
