//
//  StreamEngagement.h
//  StreamAnalytics
//
//  Created by Alexander van der Werff on 22/08/15.
//  Copyright (c) 2015 Stream. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "StreamEvent.h"

@interface StreamEngagement : NSObject <StreamEvent>


/*
    Activity Id required
 */
@property(nonatomic, strong) NSNumber *activityId;

@property(nonatomic, strong) NSString *feedId;

@property(nonatomic, strong) NSString *label;

@property(nonatomic, strong) NSNumber *score;

@property(nonatomic, strong) NSDictionary *extraData;


/*
    class methods
 */


+ (void)createEngagementEventWithActivityId:(NSNumber *)activityId
                                             feedId:(NSString *)feedId
                                              label:(NSString *)label
                                              score:(NSNumber *)score
                                          extraData:(NSDictionary *)extraData;

@end
