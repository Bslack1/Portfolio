//
//  LandingOverlay.swift
//  Pawn2Queen
//
//  Created by Bernadette Hoffman on 10/29/22.
//  Text to lay over picture.

import SwiftUI

struct LandingOverlay: View {
    var body: some View {
        VStack {
            Text("Welcome to")
                .font(.title)
                .fontWeight(.bold)
                .foregroundColor(Color.purple)
            Text("Pawn2Queen")
                .font(.largeTitle)
                .fontWeight(.bold)
                .foregroundColor(Color.red)
        }
            
    }
}

struct LandingOverlay_Previews: PreviewProvider {
    static var previews: some View {
        LandingOverlay()
    }
}
