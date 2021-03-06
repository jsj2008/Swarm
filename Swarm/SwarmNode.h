//
//  SwarmNode.h
//  Swarm
//
//  Created by Jeremy Tregunna on 2013-04-05.
//  Copyright (c) 2013 Jeremy Tregunna. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SwarmNode : NSObject
@property (nonatomic, readonly) uint64_t nodeID;

+ (instancetype)nodeWithID:(uint64_t)nodeID;

- (BOOL)isEqualToNode:(SwarmNode*)node;

@end
